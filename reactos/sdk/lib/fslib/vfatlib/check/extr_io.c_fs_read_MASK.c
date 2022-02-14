
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_3__ {int pos; int size; scalar_t__ data; struct TYPE_3__* next; } ;
typedef TYPE_1__ CHANGE ;


 char* FUNC_0 (size_t const) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*,int,int,long long) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int const,int ) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (char*,int,...) ;
 int FUNC_8 (int ,void*,size_t const) ;

void FUNC_9(off_t VAR_2, int VAR_3, void *VAR_4)
{
    CHANGE *VAR_5;
    int VAR_6;
    if (FUNC_4(VAR_1, VAR_2, 0) != VAR_2)
 FUNC_7("Seek to %lld", (long long)VAR_2);
    if ((VAR_6 = FUNC_8(VAR_1, VAR_4, VAR_3)) < 0)
 FUNC_7("Read %d bytes at %lld", VAR_3, (long long)VAR_2);

    if (VAR_6 != VAR_3)
 FUNC_2("Got %d bytes instead of %d at %lld", VAR_6, VAR_3, (long long)VAR_2);
    for (VAR_5 = VAR_0; VAR_5; VAR_5 = VAR_5->next) {
 if (VAR_5->pos < VAR_2 + VAR_3 && VAR_5->pos + VAR_5->size > VAR_2) {
     if (VAR_5->pos < VAR_2)
  FUNC_5(VAR_4, (char *)VAR_5->data + VAR_2 - VAR_5->pos,
         FUNC_6(VAR_3, VAR_5->size - VAR_2 + VAR_5->pos));
     else
  FUNC_5((char *)VAR_4 + VAR_5->pos - VAR_2, VAR_5->data,
         FUNC_6(VAR_5->size, VAR_3 + VAR_2 - VAR_5->pos));
 }
    }
}
