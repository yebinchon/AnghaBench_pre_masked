
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct rblist {scalar_t__ nr_entries; } ;
struct parse_events_error {int dummy; } ;
struct option {scalar_t__ value; } ;
struct evlist {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct parse_events_error*,int ,int) ;
 int FUNC_2 (char const*,struct strbuf*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rblist*) ;
 int FUNC_5 (int *,struct evlist*,struct rblist*) ;
 int FUNC_6 (struct evlist*,int ,struct parse_events_error*) ;
 int FUNC_7 (struct parse_events_error*,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (struct strbuf*) ;

int FUNC_10(const struct option *VAR_1,
      const char *VAR_2,
      struct rblist *VAR_3)
{
 struct parse_events_error VAR_4;
 struct evlist *VAR_5 = *(struct evlist **)VAR_1->value;
 struct strbuf VAR_6;
 FUNC_0(VAR_0);
 int VAR_7;

 if (VAR_3->nr_entries == 0)
  FUNC_4(VAR_3);
 VAR_7 = FUNC_2(VAR_2, &VAR_6, &VAR_0);
 if (VAR_7)
  return VAR_7;
 FUNC_8("adding %s\n", VAR_6.buf);
 FUNC_1(&VAR_4, 0, sizeof(struct parse_events_error));
 VAR_7 = FUNC_6(VAR_5, VAR_6.buf, &VAR_4);
 if (VAR_7) {
  FUNC_7(&VAR_4, VAR_6.buf);
  goto out;
 }
 FUNC_9(&VAR_6);
 VAR_7 = FUNC_5(&VAR_0, VAR_5,
     VAR_3);
out:
 FUNC_3(&VAR_0);
 return VAR_7;
}
