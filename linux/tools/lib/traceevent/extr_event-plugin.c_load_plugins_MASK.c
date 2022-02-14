
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int flags; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char**,char*,char*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (struct tep_handle*,char const*,char*,void (*) (struct tep_handle*,char const*,char const*,void*),void*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct tep_handle *VAR_4, const char *VAR_5,
      void (*VAR_6)(struct tep_handle *VAR_7,
     const char *VAR_8,
     const char *VAR_9,
     void *VAR_10),
      void *VAR_11)
{
 char *VAR_12;
 char *VAR_13;
 char *VAR_14;
 int VAR_15;

 if (VAR_4->flags & VAR_2)
  return;
 VAR_14 = FUNC_2("TRACEEVENT_PLUGIN_DIR");
 if (VAR_14)
  FUNC_3(VAR_4, VAR_5, VAR_14, VAR_6, VAR_11);





 VAR_12 = FUNC_2("HOME");
 if (!VAR_12)
  return;

 VAR_15 = FUNC_0(&VAR_13, "%s/%d", VAR_12, VAR_0);
 if (VAR_15 < 0) {
  FUNC_4("could not allocate plugin memory\n");
  return;
 }

 FUNC_3(VAR_4, VAR_5, VAR_13, VAR_6, VAR_11);

 FUNC_1(VAR_13);
}
