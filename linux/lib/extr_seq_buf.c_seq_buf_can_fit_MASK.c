
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_buf {scalar_t__ len; scalar_t__ size; } ;



__attribute__((used)) static bool FUNC_0(struct seq_buf *VAR_0, size_t VAR_1)
{
 return VAR_0->len + VAR_1 <= VAR_0->size;
}
