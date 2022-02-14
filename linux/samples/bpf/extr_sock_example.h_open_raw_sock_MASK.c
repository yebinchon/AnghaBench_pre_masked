
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ll {int sll_protocol; int sll_ifindex; int sll_family; } ;
struct sockaddr {int dummy; } ;
typedef int sll ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (struct sockaddr_ll*,int ,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,int,int ) ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static inline int FUNC_8(const char *VAR_7)
{
 struct sockaddr_ll VAR_8;
 int VAR_9;

 VAR_9 = FUNC_6(VAR_2, VAR_5 | VAR_4 | VAR_3, FUNC_2(VAR_1));
 if (VAR_9 < 0) {
  FUNC_5("cannot create raw socket\n");
  return -1;
 }

 FUNC_4(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.sll_family = VAR_0;
 VAR_8.sll_ifindex = FUNC_3(VAR_7);
 VAR_8.sll_protocol = FUNC_2(VAR_1);
 if (FUNC_0(VAR_9, (struct sockaddr *)&VAR_8, sizeof(VAR_8)) < 0) {
  FUNC_5("bind to %s: %s\n", VAR_7, FUNC_7(VAR_6));
  FUNC_1(VAR_9);
  return -1;
 }

 return VAR_9;
}
