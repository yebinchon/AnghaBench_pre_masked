
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char sep; int out; } ;
typedef TYPE_1__ json_writer_t ;


 int FUNC_0 (char,int ) ;

__attribute__((used)) static void FUNC_1(json_writer_t *VAR_0)
{
 if (VAR_0->sep != '\0')
  FUNC_0(VAR_0->sep, VAR_0->out);
 VAR_0->sep = ',';
}
