
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct report {int annotation_opts; int min_percent; struct perf_session* session; } ;
struct TYPE_2__ {int env; } ;
struct perf_session {TYPE_1__ header; struct evlist* evlist; } ;
struct evlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct evlist*,struct report*,char const*) ;
 int FUNC_1 (struct evlist*,char const*,int *,int ,int *,int,int *) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct report*,char const*) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct report *VAR_4)
{
 int VAR_5;
 struct perf_session *VAR_6 = VAR_4->session;
 struct evlist *VAR_7 = VAR_6->evlist;
 const char *VAR_8 = FUNC_2(FUNC_4(VAR_2));

 if (VAR_8 == ((void*)0)) {

  VAR_8 = FUNC_2(VAR_0);
  if (VAR_8 == ((void*)0))
   VAR_8 = "Cannot load tips.txt file, please install perf!";
 }

 switch (VAR_3) {
 case 1:
  VAR_5 = FUNC_1(VAR_7, VAR_8, ((void*)0),
          VAR_4->min_percent,
          &VAR_6->header.env,
          1, &VAR_4->annotation_opts);




  if (VAR_5 != VAR_1)
   VAR_5 = 0;
  break;
 case 2:
  VAR_5 = FUNC_3(VAR_4, VAR_8);
  break;
 default:
  VAR_5 = FUNC_0(VAR_7, VAR_4, VAR_8);
  break;
 }

 return VAR_5;
}
