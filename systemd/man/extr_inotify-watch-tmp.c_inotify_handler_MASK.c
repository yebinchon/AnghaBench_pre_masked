
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inotify_event {int mask; char* name; } ;
typedef int sd_event_source ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char const*,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char const**) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(sd_event_source *VAR_4,
                           const struct inotify_event *VAR_5,
                           void *VAR_6) {

  const char *VAR_7 = ((void*)0);

  FUNC_2(VAR_4, &VAR_7);

  if (VAR_5->mask & VAR_3)
    FUNC_0("inotify-handler <%s>: overflow\n", VAR_7);
  else if (VAR_5->mask & VAR_0)
    FUNC_0("inotify-handler <%s>: create on %s\n", VAR_7, VAR_5->name);
  else if (VAR_5->mask & VAR_1)
    FUNC_0("inotify-handler <%s>: delete on %s\n", VAR_7, VAR_5->name);
  else if (VAR_5->mask & VAR_2)
    FUNC_0("inotify-handler <%s>: moved-to on %s\n", VAR_7, VAR_5->name);


  if ((VAR_5->mask & (VAR_0|VAR_2)) &&
      FUNC_4(VAR_5->name, "exit") == 0)
    FUNC_1(FUNC_3(VAR_4), 0);

  return 1;
}
