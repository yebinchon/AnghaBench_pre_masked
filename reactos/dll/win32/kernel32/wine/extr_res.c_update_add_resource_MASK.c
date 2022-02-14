
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct resource_dir_entry {int children; void* id; } ;
struct resource_data {int entry; } ;
struct TYPE_4__ {int root; } ;
typedef TYPE_1__ QUEUEDUPDATES ;
typedef int LPCWSTR ;
typedef int LANGID ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct resource_dir_entry* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,struct resource_data*) ;
 int FUNC_3 (char*,TYPE_1__*,int ,int ,struct resource_data*,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,struct resource_data*) ;
 int FUNC_5 (int *,struct resource_dir_entry*) ;
 int FUNC_6 (int ) ;
 struct resource_data* FUNC_7 (int *,int ) ;
 struct resource_dir_entry* FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (int ) ;

__attribute__((used)) static BOOL FUNC_12( QUEUEDUPDATES *VAR_2, LPCWSTR VAR_3, LPCWSTR VAR_4,
                                 LANGID VAR_5, struct resource_data *VAR_6,
                                 BOOL VAR_7 )
{
    struct resource_dir_entry *VAR_8, *VAR_9;
    struct resource_data *VAR_10;

    FUNC_3("%p %s %s %p %d\n", VAR_2,
          FUNC_6(VAR_3), FUNC_6(VAR_4), VAR_6, VAR_7 );

    VAR_8 = FUNC_8( &VAR_2->root, VAR_3 );
    if (!VAR_8)
    {
        VAR_8 = FUNC_1( FUNC_0(), 0, sizeof *VAR_8 );
        VAR_8->id = FUNC_11( VAR_3 );
        FUNC_9( &VAR_8->children );
        FUNC_5( &VAR_2->root, VAR_8 );
    }

    VAR_9 = FUNC_8( &VAR_8->children, VAR_4 );
    if (!VAR_9)
    {
        VAR_9 = FUNC_1( FUNC_0(), 0, sizeof *VAR_9 );
        VAR_9->id = FUNC_11( VAR_4 );
        FUNC_9( &VAR_9->children );
        FUNC_5( &VAR_8->children, VAR_9 );
    }





    VAR_10 = FUNC_7( &VAR_9->children, VAR_5 );
    if (VAR_10)
    {
        if (!VAR_7)
            return VAR_0;
        FUNC_10( &VAR_10->entry );
        FUNC_2( FUNC_0(), 0, VAR_10 );
    }

    if (VAR_6)
        FUNC_4( &VAR_9->children, VAR_6 );

    return VAR_1;
}
