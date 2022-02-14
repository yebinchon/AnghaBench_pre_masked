
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,unsigned long*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (char**,char*) ;

__attribute__((used)) static int FUNC_4(char *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 int VAR_6;

 FUNC_3(&VAR_3, "=");
 if (!VAR_3) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_6 = FUNC_1(VAR_3, 0, &VAR_4);
 if (VAR_6)
  goto out;

 VAR_5 = FUNC_0(FUNC_2(VAR_4));
 if (VAR_5 < VAR_2 ||
     VAR_5 > VAR_1)
  VAR_6 = -VAR_0;
 else
  VAR_6 = VAR_5;
 out:
 return VAR_6;
}
