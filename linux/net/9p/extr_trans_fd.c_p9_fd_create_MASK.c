
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct p9_fd_opts {int wfd; int rfd; } ;
struct TYPE_4__ {int wfd; int rfd; } ;
struct TYPE_3__ {TYPE_2__ fd; } ;
struct p9_client {TYPE_1__ trans_opts; } ;


 int VAR_0 ;
 int FUNC_0 (struct p9_client*) ;
 int FUNC_1 (struct p9_client*,int ,int ) ;
 int FUNC_2 (char*,struct p9_fd_opts*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct p9_client *VAR_1, const char *VAR_2, char *VAR_3)
{
 int VAR_4;
 struct p9_fd_opts VAR_5;

 FUNC_2(VAR_3, &VAR_5);
 VAR_1->trans_opts.fd.rfd = VAR_5.rfd;
 VAR_1->trans_opts.fd.wfd = VAR_5.wfd;

 if (VAR_5.rfd == ~0 || VAR_5.wfd == ~0) {
  FUNC_3("Insufficient options for proto=fd\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_1(VAR_1, VAR_5.rfd, VAR_5.wfd);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_0(VAR_1);

 return 0;
}
