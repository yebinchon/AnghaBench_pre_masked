
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atomic_t ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned long,unsigned long,unsigned int,unsigned int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned int) ;
 unsigned int FUNC_4 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned long FUNC_5(unsigned long VAR_2)
{
 static unsigned long VAR_3;
 unsigned int VAR_4, VAR_5, VAR_6;
 static atomic_t VAR_7;

 VAR_6 = 1 << FUNC_0(VAR_0);
 if (VAR_6 <= 1)
  return 1;

 VAR_4 = FUNC_4(&VAR_1, 0);
 VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_4, VAR_6,
      FUNC_2(&VAR_7));
 if (!VAR_4)
  VAR_3 = VAR_2;
 FUNC_3(&VAR_7, VAR_5);

 return VAR_5;
}
