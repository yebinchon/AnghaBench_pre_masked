
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbuffer {void* flags; int read_4; int read_8; } ;


 void* VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct kbuffer*,void*,void**,unsigned long long*,int*) ;

void *FUNC_2(int VAR_5, void *VAR_6, unsigned int *VAR_7)
{
 unsigned long long VAR_8;
 struct kbuffer VAR_9;
 int VAR_10;
 int VAR_11;
 void *VAR_12;

 if (VAR_5) {
  VAR_9.read_8 = VAR_4;
  VAR_9.read_4 = VAR_2;
  VAR_9.flags = FUNC_0() ? 0 : VAR_0;
 } else {
  VAR_9.read_8 = VAR_3;
  VAR_9.read_4 = VAR_1;
  VAR_9.flags = FUNC_0() ? VAR_0: 0;
 }

 VAR_10 = FUNC_1(&VAR_9, VAR_6, &VAR_12, &VAR_8, &VAR_11);
 switch (VAR_10) {
 case 130:
 case 129:
 case 128:
  return ((void*)0);
 };

 *VAR_7 = VAR_11;

 return VAR_12;
}
