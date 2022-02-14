
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evlist {int dummy; } ;
typedef int sbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct evlist*,int*,int*) ;
 int VAR_2 ;
 int FUNC_1 (struct evlist*) ;
 int FUNC_2 (struct evlist*) ;
 int FUNC_3 (struct evlist*,int) ;
 int FUNC_4 (struct evlist*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct evlist *VAR_3, int VAR_4,
     int *VAR_5, int *VAR_6)
{
 int VAR_7;
 char VAR_8[VAR_0];

 VAR_7 = FUNC_3(VAR_3, VAR_4);
 if (VAR_7 < 0) {
  FUNC_5("evlist__mmap: %s\n",
    FUNC_6(VAR_2, VAR_8, sizeof(VAR_8)));
  return VAR_1;
 }

 FUNC_2(VAR_3);
 FUNC_7();
 FUNC_1(VAR_3);

 VAR_7 = FUNC_0(VAR_3, VAR_5, VAR_6);
 FUNC_4(VAR_3);
 return VAR_7;
}
