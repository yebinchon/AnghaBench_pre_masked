
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int ifalias; } ;
struct dev_ifalias {char* ifalias; } ;


 struct dev_ifalias* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,size_t,char*,char*) ;

int FUNC_4(const struct net_device *VAR_0, char *VAR_1, size_t VAR_2)
{
 const struct dev_ifalias *VAR_3;
 int VAR_4 = 0;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_0->ifalias);
 if (VAR_3)
  VAR_4 = FUNC_3(VAR_1, VAR_2, "%s", VAR_3->ifalias);
 FUNC_2();

 return VAR_4;
}
