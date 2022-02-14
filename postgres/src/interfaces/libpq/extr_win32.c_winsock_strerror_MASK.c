
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int loaded; void* handle; scalar_t__ dll_name; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long,void*,int,int ,char*,size_t,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int,int) ;
 int FUNC_6 (char*) ;

const char *
FUNC_7(int VAR_8, char *VAR_9, size_t VAR_10)
{
 unsigned long VAR_11;
 int VAR_12,
    VAR_13;
 int VAR_14 = FUNC_2(VAR_8, VAR_9);

 for (VAR_13 = 0; !VAR_14 && VAR_13 < VAR_0; VAR_13++)
 {

  if (!VAR_7[VAR_13].loaded)
  {
   VAR_7[VAR_13].loaded = 1;
   VAR_7[VAR_13].handle = (void *) FUNC_1(
             VAR_7[VAR_13].dll_name,
             0,
             VAR_5);
  }

  if (VAR_7[VAR_13].dll_name && !VAR_7[VAR_13].handle)
   continue;

  VAR_11 = VAR_2
   | VAR_3
   | (VAR_7[VAR_13].handle ? VAR_1 : 0);

  VAR_14 = 0 != FUNC_0(
          VAR_11,
          VAR_7[VAR_13].handle, VAR_8,
          FUNC_3(VAR_4, VAR_6),
          VAR_9, VAR_10 - 64,
          0
   );
 }

 if (!VAR_14)
  FUNC_5(VAR_9, FUNC_4("unrecognized socket error: 0x%08X/%d"), VAR_8, VAR_8);
 else
 {
  VAR_9[VAR_10 - 1] = '\0';
  VAR_12 = FUNC_6(VAR_9);
  if (VAR_12 > (int) VAR_10 - 64)
   VAR_12 = VAR_10 - 64;
  FUNC_5(VAR_9 + VAR_12, " (0x%08X/%d)", VAR_8, VAR_8);
 }
 return VAR_9;
}
