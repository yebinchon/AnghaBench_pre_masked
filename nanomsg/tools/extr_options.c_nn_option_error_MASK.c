
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_parse_context {char** argv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct nn_parse_context*,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3 (char *VAR_1, struct nn_parse_context *VAR_2,
                     int VAR_3)
{
    FUNC_1 (VAR_0, "%s: Option", VAR_2->argv[0]);
    FUNC_2 (VAR_2, VAR_3, VAR_0);
    FUNC_1 (VAR_0, "%s\n", VAR_1);
    FUNC_0 (1);
}
