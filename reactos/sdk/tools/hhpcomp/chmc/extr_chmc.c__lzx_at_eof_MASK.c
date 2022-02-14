
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmcLzxInfo {scalar_t__ done; scalar_t__ todo; scalar_t__ eof; scalar_t__ error; } ;



__attribute__((used)) static int FUNC_0(void *VAR_0)
{
 struct chmcLzxInfo *VAR_1 = (struct chmcLzxInfo *)VAR_0;

 return VAR_1->error || VAR_1->done >= VAR_1->todo || VAR_1->eof;
}
