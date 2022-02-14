
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (void*) ;

void FUNC_1(void *VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3 = VAR_0;

 while (VAR_2 >= 8*sizeof(long)) {
  FUNC_0(VAR_1 + 384);
  VAR_3 ^= *(unsigned long *)VAR_1;
  VAR_3 ^= *(unsigned long *)(VAR_1 + sizeof(long));
  VAR_3 ^= *(unsigned long *)(VAR_1 + 2*sizeof(long));
  VAR_3 ^= *(unsigned long *)(VAR_1 + 3*sizeof(long));
  VAR_3 ^= *(unsigned long *)(VAR_1 + 4*sizeof(long));
  VAR_3 ^= *(unsigned long *)(VAR_1 + 5*sizeof(long));
  VAR_3 ^= *(unsigned long *)(VAR_1 + 6*sizeof(long));
  VAR_3 ^= *(unsigned long *)(VAR_1 + 7*sizeof(long));
  VAR_1 += 8*sizeof(long);
  VAR_2 -= 8*sizeof(long);
 }
 while (VAR_2 >= 1) {
  VAR_3 ^= *(unsigned char *)VAR_1;
  VAR_1 += 1;
  VAR_2--;
 }
 VAR_0 = VAR_3;
}
