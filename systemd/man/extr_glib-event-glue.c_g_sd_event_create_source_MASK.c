
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sd_event ;
struct TYPE_4__ {int events; int fd; } ;
struct TYPE_3__ {TYPE_2__ pollfd; int event; } ;
typedef TYPE_1__ SDEventSource ;
typedef int GSource ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

GSource *FUNC_4(sd_event *VAR_4) {
  SDEventSource *VAR_5;

  VAR_5 = (SDEventSource *)FUNC_1(&VAR_3, sizeof(SDEventSource));

  VAR_5->event = FUNC_3(VAR_4);
  VAR_5->pollfd.fd = FUNC_2(VAR_4);
  VAR_5->pollfd.events = VAR_2 | VAR_1 | VAR_0;

  FUNC_0((GSource *)VAR_5, &VAR_5->pollfd);

  return (GSource *)VAR_5;
}
