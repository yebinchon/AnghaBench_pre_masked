
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (char*,int,char const*,int,int) ;

__attribute__((used)) static int FUNC_2(int VAR_3, unsigned int VAR_4,
          const char *VAR_5)
{
 int VAR_6 = VAR_4 & VAR_1 ? VAR_2 : VAR_0;

 if (VAR_3 < 1 || VAR_3 > VAR_6)
  FUNC_1("workqueue: max_active %d requested for %s is out of range, clamping between %d and %d\n",
   VAR_3, VAR_5, 1, VAR_6);

 return FUNC_0(VAR_3, 1, VAR_6);
}
