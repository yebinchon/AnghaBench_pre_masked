
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Int32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,...) ;
 char* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2 ( Int32 VAR_2 )
{
   FUNC_1 ( VAR_1,
             "%s: malloc failed on request for %d bytes.\n",
            VAR_0, VAR_2 );
   FUNC_1 ( VAR_1, "%s: warning: output file(s) may be incomplete.\n",
             VAR_0 );
   FUNC_0 ( 1 );
}
