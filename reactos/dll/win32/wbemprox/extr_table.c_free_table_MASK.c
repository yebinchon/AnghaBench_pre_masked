
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int flags; int entry; struct table* data; int num_cols; scalar_t__ columns; scalar_t__ name; } ;
struct column {int dummy; } ;
typedef struct table WCHAR ;


 int VAR_0 ;
 int FUNC_0 (char*,struct table*) ;
 int FUNC_1 (struct table*) ;
 int FUNC_2 (struct column*,int ) ;
 int FUNC_3 (struct table*) ;
 int FUNC_4 (int *) ;

void FUNC_5( struct table *VAR_1 )
{
    if (!VAR_1) return;

    FUNC_1( VAR_1 );
    if (VAR_1->flags & VAR_0)
    {
        FUNC_0("destroying %p\n", VAR_1);
        FUNC_3( (WCHAR *)VAR_1->name );
        FUNC_2( (struct column *)VAR_1->columns, VAR_1->num_cols );
        FUNC_3( VAR_1->data );
        FUNC_4( &VAR_1->entry );
        FUNC_3( VAR_1 );
    }
}
