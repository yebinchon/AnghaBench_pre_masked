
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* modi; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*,char const*,char*,...) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3 ( const char *VAR_6 )
{
    int VAR_7 = FUNC_2 ( FUNC_0 ( VAR_5 ) );

    if ( VAR_7 ) {
        FUNC_1 ( VAR_4, "Mode %s%s%s is not enabled. I have enabled it for now.\n",
                  VAR_1, VAR_6, VAR_2 );
        FUNC_1 ( VAR_4, "Please consider adding %s%s%s to the list of enabled modi: %smodi: %s%s%s,%s%s.\n",
                  VAR_1, VAR_6, VAR_2,
                  VAR_0, VAR_3.modi, VAR_2,
                  VAR_1, VAR_6, VAR_2
                  );
    }
}
