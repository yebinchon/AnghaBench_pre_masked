
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char sep; int out; scalar_t__ pretty; } ;
typedef TYPE_1__ json_writer_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (char,int ) ;

void FUNC_4(json_writer_t *VAR_0, const char *VAR_1)
{
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
 VAR_0->sep = '\0';
 FUNC_2(VAR_0, VAR_1);
 FUNC_3(':', VAR_0->out);
 if (VAR_0->pretty)
  FUNC_3(' ', VAR_0->out);
}
