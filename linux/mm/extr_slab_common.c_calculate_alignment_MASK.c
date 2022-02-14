
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int slab_flags_t ;


 unsigned int FUNC_0 (unsigned int,int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 () ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(slab_flags_t VAR_2,
  unsigned int VAR_3, unsigned int VAR_4)
{







 if (VAR_2 & VAR_1) {
  unsigned int VAR_5;

  VAR_5 = FUNC_1();
  while (VAR_4 <= VAR_5 / 2)
   VAR_5 /= 2;
  VAR_3 = FUNC_2(VAR_3, VAR_5);
 }

 if (VAR_3 < VAR_0)
  VAR_3 = VAR_0;

 return FUNC_0(VAR_3, sizeof(void *));
}
