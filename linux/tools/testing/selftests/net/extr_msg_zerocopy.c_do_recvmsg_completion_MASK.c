
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_zcopy_cookies {int dummy; } ;
struct msghdr {char* msg_control; int msg_controllen; int msg_flags; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; } ;
typedef int msg ;
typedef int cmsgbuf ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 struct cmsghdr* FUNC_2 (struct msghdr*,struct cmsghdr*) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct rds_zcopy_cookies*) ;
 int VAR_5 ;
 int FUNC_5 (int,int ,char*,...) ;
 int FUNC_6 (struct msghdr*,int ,int) ;
 scalar_t__ FUNC_7 (int,struct msghdr*,int ) ;

__attribute__((used)) static bool FUNC_8(int VAR_6)
{
 char VAR_7[FUNC_3(sizeof(struct rds_zcopy_cookies))];
 struct rds_zcopy_cookies *VAR_8;
 struct cmsghdr *VAR_9;
 struct msghdr VAR_10;
 bool VAR_11 = 0;

 FUNC_6(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.msg_control = VAR_7;
 VAR_10.msg_controllen = sizeof(VAR_7);

 if (FUNC_7(VAR_6, &VAR_10, VAR_1))
  return VAR_11;

 if (VAR_10.msg_flags & VAR_0)
  FUNC_5(1, VAR_5, "recvmsg notification: truncated");

 for (VAR_9 = FUNC_1(&VAR_10); VAR_9; VAR_9 = FUNC_2(&VAR_10, VAR_9)) {
  if (VAR_9->cmsg_level == VAR_3 &&
      VAR_9->cmsg_type == VAR_2) {

   VAR_8 = (struct rds_zcopy_cookies *)FUNC_0(VAR_9);
   VAR_4 += FUNC_4(VAR_8);
   VAR_11 = 1;
   break;
  }
  FUNC_5(0, 0, "ignoring cmsg at level %d type %d\n",
       VAR_9->cmsg_level, VAR_9->cmsg_type);
 }
 return VAR_11;
}
