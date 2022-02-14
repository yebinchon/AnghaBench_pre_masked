
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zstd_data {int * cstream; int * dstream; } ;


 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int FUNC_2 (size_t) ;
 size_t FUNC_3 (int *,int) ;
 size_t FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (size_t) ;
 int FUNC_6 (char*,...) ;

int FUNC_7(struct zstd_data *VAR_0, int VAR_1)
{
 size_t VAR_2;

 VAR_0->dstream = FUNC_1();
 if (VAR_0->dstream == ((void*)0)) {
  FUNC_6("Couldn't create decompression stream.\n");
  return -1;
 }

 VAR_2 = FUNC_4(VAR_0->dstream);
 if (FUNC_5(VAR_2)) {
  FUNC_6("Failed to initialize decompression stream: %s\n", FUNC_2(VAR_2));
  return -1;
 }

 if (!VAR_1)
  return 0;

 VAR_0->cstream = FUNC_0();
 if (VAR_0->cstream == ((void*)0)) {
  FUNC_6("Couldn't create compression stream.\n");
  return -1;
 }

 VAR_2 = FUNC_3(VAR_0->cstream, VAR_1);
 if (FUNC_5(VAR_2)) {
  FUNC_6("Failed to initialize compression stream: %s\n", FUNC_2(VAR_2));
  return -1;
 }

 return 0;
}
