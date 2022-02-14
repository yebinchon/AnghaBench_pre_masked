
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union sockaddr_all {int s; } ;
typedef scalar_t__ uint64_t ;
typedef int u ;
struct socket_info {char* name; int wbuffer; int wtime; int rtime; int write; int read; scalar_t__ opaque; int id; int type; } ;
struct TYPE_4__ {int wtime; int rtime; int write; int read; } ;
struct TYPE_3__ {int udp_address; } ;
struct socket {int type; int wb_size; TYPE_2__ stat; scalar_t__ opaque; int id; TYPE_1__ p; int fd; int protocol; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (union sockaddr_all*,char*,int) ;
 int FUNC_1 (int ,int *,int*) ;
 int FUNC_2 (int ,int *,int*) ;
 int FUNC_3 (struct socket*,int ,union sockaddr_all*) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_5, struct socket_info *VAR_6) {
 union sockaddr_all VAR_7;
 socklen_t VAR_8 = sizeof(VAR_7);
 switch (VAR_5->type) {
 case 130:
  VAR_6->type = VAR_1;
  VAR_6->name[0] = '\0';
  break;
 case 128:
  VAR_6->type = VAR_2;
  if (FUNC_2(VAR_5->fd, &VAR_7.s, &VAR_8) == 0) {
   FUNC_0(&VAR_7, VAR_6->name, sizeof(VAR_6->name));
  }
  break;
 case 129:
  if (VAR_5->protocol == VAR_0) {
   VAR_6->type = VAR_3;
   if (FUNC_1(VAR_5->fd, &VAR_7.s, &VAR_8) == 0) {
    FUNC_0(&VAR_7, VAR_6->name, sizeof(VAR_6->name));
   }
  } else {
   VAR_6->type = VAR_4;
   if (FUNC_3(VAR_5, VAR_5->p.udp_address, &VAR_7)) {
    FUNC_0(&VAR_7, VAR_6->name, sizeof(VAR_6->name));
   }
  }
  break;
 default:
  return 0;
 }
 VAR_6->id = VAR_5->id;
 VAR_6->opaque = (uint64_t)VAR_5->opaque;
 VAR_6->read = VAR_5->stat.read;
 VAR_6->write = VAR_5->stat.write;
 VAR_6->rtime = VAR_5->stat.rtime;
 VAR_6->wtime = VAR_5->stat.wtime;
 VAR_6->wbuffer = VAR_5->wb_size;

 return 1;
}
