
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int number; scalar_t__ offset; int type; int colname; } ;
typedef int MSIDATABASE ;
typedef TYPE_1__ MSICOLUMNINFO ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ,int ,scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4( MSIDATABASE *VAR_1, MSICOLUMNINFO *VAR_2, DWORD VAR_3 )
{
    DWORD VAR_4;

    for (VAR_4 = 0; VAR_2 && VAR_4 < VAR_3; VAR_4++)
    {
         FUNC_1( VAR_4 + 1 == VAR_2[VAR_4].number );
         if (VAR_4) VAR_2[VAR_4].offset = VAR_2[VAR_4 - 1].offset +
                                    FUNC_2( VAR_1, &VAR_2[VAR_4 - 1], VAR_0 );
         else VAR_2[VAR_4].offset = 0;

         FUNC_0("column %d is [%s] with type %08x ofs %d\n",
               VAR_2[VAR_4].number, FUNC_3(VAR_2[VAR_4].colname),
               VAR_2[VAR_4].type, VAR_2[VAR_4].offset);
    }
}
