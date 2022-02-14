
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct trace_buffer {int buffer; } ;


 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;

__attribute__((used)) static u64 FUNC_3(struct trace_buffer *VAR_0, int VAR_1)
{
 u64 VAR_2;


 if (!VAR_0->buffer)
  return FUNC_2();

 VAR_2 = FUNC_1(VAR_0->buffer, VAR_1);
 FUNC_0(VAR_0->buffer, VAR_1, &VAR_2);

 return VAR_2;
}
