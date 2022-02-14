
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ver ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(int VAR_4)
{
 int VAR_5, VAR_6 = FUNC_3(VAR_1, VAR_2, 0);
 if (VAR_6 == -1) {
  FUNC_1("socket");
  FUNC_0(1);
 }

 VAR_5 = FUNC_2(VAR_6, VAR_3, VAR_0, &VAR_4, sizeof(VAR_4));
 if (VAR_5 == -1) {
  FUNC_1("setsockopt");
  FUNC_0(1);
 }

 return VAR_6;
}
