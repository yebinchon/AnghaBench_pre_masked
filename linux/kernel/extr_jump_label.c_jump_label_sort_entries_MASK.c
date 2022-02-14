
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jump_entry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (struct jump_entry*,unsigned long,int,int ,void*) ;

__attribute__((used)) static void
FUNC_2(struct jump_entry *VAR_3, struct jump_entry *VAR_4)
{
 unsigned long VAR_5;
 void *VAR_6 = ((void*)0);

 if (FUNC_0(VAR_0))
  VAR_6 = VAR_2;

 VAR_5 = (((unsigned long)VAR_4 - (unsigned long)VAR_3)
     / sizeof(struct jump_entry));
 FUNC_1(VAR_3, VAR_5, sizeof(struct jump_entry), VAR_1, VAR_6);
}
