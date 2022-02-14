
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char sep; int depth; int out; } ;
typedef TYPE_1__ json_writer_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(json_writer_t *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0);
 FUNC_1(VAR_1, VAR_0->out);
 ++VAR_0->depth;
 VAR_0->sep = '\0';
}
