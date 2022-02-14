
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef int ULONG ;
struct TYPE_2__ {int n_strx; int n_type; int n_value; int n_desc; int n_other; } ;
typedef int STAB_ENTRY ;
typedef TYPE_1__* PSTAB_ENTRY ;
typedef int PIMAGE_SECTION_HEADER ;
typedef int PIMAGE_FILE_HEADER ;


 int FUNC_0 (char*,...) ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(ULONG VAR_0, void *VAR_1,
             ULONG VAR_2, void *VAR_3,
             ULONG_PTR VAR_4, PIMAGE_FILE_HEADER VAR_5,
             PIMAGE_SECTION_HEADER VAR_6)
{
  PSTAB_ENTRY VAR_7;
  ULONG VAR_8, VAR_9;

  VAR_7 = VAR_1;
  VAR_8 = VAR_0 / sizeof(STAB_ENTRY);
  if (VAR_8 == 0)
    return;

  FUNC_0 ( "type,other,desc,value,str\n" );
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
    {
   FUNC_0 ( "%s,%lu(0x%x),%lu(0x%x),%lu(0x%x),%s\n",
    FUNC_1(VAR_7[VAR_9].n_type),
    VAR_7[VAR_9].n_other,
    VAR_7[VAR_9].n_other,
    VAR_7[VAR_9].n_desc,
    VAR_7[VAR_9].n_desc,
    VAR_7[VAR_9].n_value,
    VAR_7[VAR_9].n_value,
    (char *) VAR_3 + VAR_7[VAR_9].n_strx );
    }
}
