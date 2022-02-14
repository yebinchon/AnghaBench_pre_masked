
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmtp_session {int msgnum; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct cmtp_session *VAR_1)
{
 VAR_1->msgnum++;

 if ((VAR_1->msgnum & 0xff) > 200)
  VAR_1->msgnum = VAR_0 + 1;

 return VAR_1->msgnum;
}
