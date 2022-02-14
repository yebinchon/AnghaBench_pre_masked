
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct splice_pipe_desc {TYPE_1__* partial; } ;
struct buffer_ref {int dummy; } ;
struct TYPE_2__ {scalar_t__ private; } ;


 int FUNC_0 (struct buffer_ref*) ;

__attribute__((used)) static void FUNC_1(struct splice_pipe_desc *VAR_0, unsigned int VAR_1)
{
 struct buffer_ref *VAR_2 =
  (struct buffer_ref *)VAR_0->partial[VAR_1].private;

 FUNC_0(VAR_2);
 VAR_0->partial[VAR_1].private = 0;
}
