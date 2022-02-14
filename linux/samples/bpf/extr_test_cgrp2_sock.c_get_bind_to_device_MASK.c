
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,char*,size_t*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(int VAR_2, char *VAR_3, size_t VAR_4)
{
 socklen_t VAR_5 = VAR_4;
 int VAR_6;

 VAR_3[0] = '\0';
 VAR_6 = FUNC_0(VAR_2, VAR_0, VAR_1, VAR_3, &VAR_5);
 if (VAR_6 < 0)
  FUNC_1("setsockopt(SO_BINDTODEVICE)");

 return VAR_6;
}
