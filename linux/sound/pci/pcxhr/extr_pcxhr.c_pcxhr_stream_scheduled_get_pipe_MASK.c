
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcxhr_stream {scalar_t__ status; struct pcxhr_pipe* pipe; } ;
struct pcxhr_pipe {int dummy; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct pcxhr_stream *VAR_1,
        struct pcxhr_pipe **VAR_2)
{
 if (VAR_1->status == VAR_0) {
  *VAR_2 = VAR_1->pipe;
  return 1;
 }
 return 0;
}
