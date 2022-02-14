
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; scalar_t__ end; scalar_t__ tail; int data; int head; int len; } ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,char const*,void*,int ,unsigned int,int ,int ,unsigned long,unsigned long,char*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0, unsigned int VAR_1, void *VAR_2,
        const char VAR_3[])
{
 FUNC_1("%s: text:%p len:%d put:%d head:%p data:%p tail:%#lx end:%#lx dev:%s\n",
   VAR_3, VAR_2, VAR_0->len, VAR_1, VAR_0->head, VAR_0->data,
   (unsigned long)VAR_0->tail, (unsigned long)VAR_0->end,
   VAR_0->dev ? VAR_0->dev->name : "<NULL>");
 FUNC_0();
}
