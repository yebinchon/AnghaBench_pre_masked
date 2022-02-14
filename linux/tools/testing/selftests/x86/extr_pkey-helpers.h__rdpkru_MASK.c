
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,unsigned int,unsigned int) ;
 unsigned int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_3(int VAR_1)
{
 unsigned int VAR_2 = FUNC_0();

 FUNC_2("rdpkru(line=%d) pkru: %x shadow: %x\n",
   VAR_1, VAR_2, VAR_0);
 FUNC_1(VAR_2 == VAR_0);

 return VAR_2;
}
