
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (char*,int ,unsigned char*,unsigned char*,unsigned char*,unsigned char*,unsigned char*,unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_7 (int ) ;
 unsigned int FUNC_8 (char*,char**,int ) ;

int FUNC_9(int *VAR_4, char ***VAR_5)
{
 int VAR_6;

 if (FUNC_2(**VAR_5, "id")) {
  unsigned int VAR_7;
  char *VAR_8;

  FUNC_0();

  VAR_7 = FUNC_8(**VAR_5, &VAR_8, 0);
  if (*VAR_8) {
   FUNC_4("can't parse %s as ID", **VAR_5);
   return -1;
  }
  FUNC_0();

  VAR_6 = FUNC_1(VAR_7);
  if (VAR_6 < 0)
   FUNC_4("get by id (%u): %s", VAR_7, FUNC_7(VAR_3));
  return VAR_6;
 } else if (FUNC_2(**VAR_5, "tag")) {
  unsigned char VAR_9[VAR_2];

  FUNC_0();

  if (FUNC_6(**VAR_5, VAR_1, VAR_9, VAR_9 + 1, VAR_9 + 2,
      VAR_9 + 3, VAR_9 + 4, VAR_9 + 5, VAR_9 + 6, VAR_9 + 7)
      != VAR_2) {
   FUNC_4("can't parse tag");
   return -1;
  }
  FUNC_0();

  return FUNC_5(VAR_9);
 } else if (FUNC_2(**VAR_5, "pinned")) {
  char *VAR_10;

  FUNC_0();

  VAR_10 = **VAR_5;
  FUNC_0();

  return FUNC_3(VAR_10, VAR_0);
 }

 FUNC_4("expected 'id', 'tag' or 'pinned', got: '%s'?", **VAR_5);
 return -1;
}
