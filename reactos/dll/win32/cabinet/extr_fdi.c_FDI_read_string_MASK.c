
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int cab_UBYTE ;
struct TYPE_5__ {int (* seek ) (int ,size_t,int ) ;int (* free ) (int *) ;int (* read ) (int ,int *,size_t) ;int * (* alloc ) (size_t) ;} ;
typedef int INT_PTR ;
typedef TYPE_1__ FDI_Int ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,TYPE_1__*,int ,long) ;
 scalar_t__ VAR_2 ;
 size_t FUNC_3 (char*) ;
 int * FUNC_4 (size_t) ;
 int FUNC_5 (int ,int *,size_t) ;
 int FUNC_6 (int ,size_t,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,size_t,int ) ;

__attribute__((used)) static char *FUNC_10(FDI_Int *VAR_3, INT_PTR VAR_4, long VAR_5)
{
  size_t VAR_6=256,
         VAR_7 = FUNC_1(VAR_3, VAR_4),
         VAR_8 = VAR_5 - VAR_7;
  BOOL VAR_9 = VAR_0;
  unsigned int VAR_10;
  cab_UBYTE *VAR_11 = ((void*)0);

  FUNC_2("(fdi == %p, hf == %ld, cabsize == %ld)\n", VAR_3, VAR_4, VAR_5);

  do {
    if (VAR_6 > VAR_8) VAR_6 = VAR_8;
    if (!(VAR_11 = VAR_3->alloc(VAR_6))) break;
    if (!VAR_3->read(VAR_4, VAR_11, VAR_6)) break;


    for (VAR_10=0; VAR_10 < VAR_6; VAR_10++) {
      if (!VAR_11[VAR_10]) {VAR_9=VAR_2; break;}
    }

    if (!VAR_9) {
      if (VAR_6 == VAR_8) {
        FUNC_0("cabinet is truncated\n");
        break;
      }



      VAR_3->seek(VAR_4, VAR_7, VAR_1);
      VAR_3->free(VAR_11);
      VAR_11 = ((void*)0);
      VAR_6 *= 2;
    }
  } while (!VAR_9);

  if (!VAR_9) {
    if (VAR_11)
      VAR_3->free(VAR_11);
    else
      FUNC_0("out of memory!\n");
    return ((void*)0);
  }


  VAR_3->seek(VAR_4, VAR_7 + FUNC_3((char *)VAR_11) + 1, VAR_1);

  return (char *) VAR_11;
}
