
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct testcase {scalar_t__ tlen; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct testcase*,int,int,struct sockaddr*,int ) ;
 struct testcase* VAR_2 ;
 struct testcase* VAR_3 ;

__attribute__((used)) static void FUNC_1(int VAR_4, int VAR_5, struct sockaddr *VAR_6, socklen_t VAR_7)
{
 struct testcase *VAR_8, *VAR_9;

 VAR_8 = VAR_6->sa_family == VAR_0 ? VAR_2 : VAR_3;

 for (VAR_9 = VAR_8; VAR_9->tlen; VAR_9++) {

  if (VAR_1 == -1 ||
      VAR_1 == VAR_9 - VAR_8)
   FUNC_0(VAR_9, VAR_4, VAR_5, VAR_6, VAR_7);
 }
}
