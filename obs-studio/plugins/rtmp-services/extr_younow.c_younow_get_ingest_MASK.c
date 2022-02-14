
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct younow_mem_struct {char const* memory; scalar_t__ size; } ;
struct dstr {void* array; } ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,long*) ;
 int * FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,void*) ;
 char const* FUNC_6 (scalar_t__) ;
 char const* VAR_11 ;
 int FUNC_7 (struct dstr*,char const*) ;
 int FUNC_8 (struct dstr*) ;
 int FUNC_9 (struct dstr*) ;
 int FUNC_10 (struct dstr*,char const*,int) ;
 int FUNC_11 (char const*) ;
 char const* FUNC_12 (int) ;
 char* FUNC_13 (char const*,char) ;
 char* FUNC_14 (char const*) ;
 void* VAR_12 ;

const char *FUNC_15(const char *VAR_13, const char *VAR_14)
{
 CURL *VAR_15;
 CURLcode VAR_16;
 struct younow_mem_struct VAR_17;
 struct dstr VAR_18;
 long VAR_19;


 const char *VAR_20 = FUNC_13(VAR_14, '_');
 if (VAR_20 == ((void*)0)) {
  FUNC_0(VAR_10,
       "younow_get_ingest: delimiter not found in stream key");
  return VAR_13;
 }

 VAR_15 = FUNC_3();

 VAR_17.memory = FUNC_12(1);
 VAR_17.size = 0;

 FUNC_9(&VAR_18);
 FUNC_7(&VAR_18, VAR_13);
 FUNC_10(&VAR_18, VAR_14, VAR_20 - VAR_14);

 FUNC_5(VAR_15, VAR_6, VAR_18.array);
 FUNC_5(VAR_15, VAR_4, 1);
 FUNC_5(VAR_15, VAR_3, 2L);
 FUNC_5(VAR_15, VAR_5, 3L);
 FUNC_5(VAR_15, VAR_8, VAR_12);
 FUNC_5(VAR_15, VAR_7, (void *)&VAR_17);






 VAR_16 = FUNC_4(VAR_15);
 FUNC_8(&VAR_18);

 if (VAR_16 != VAR_0) {
  FUNC_0(VAR_10,
       "younow_get_ingest: curl_easy_perform() failed: %s",
       FUNC_6(VAR_16));
  FUNC_1(VAR_15);
  FUNC_11(VAR_17.memory);
  return VAR_13;
 }

 FUNC_2(VAR_15, VAR_1, &VAR_19);
 if (VAR_19 != 200) {
  FUNC_0(VAR_10,
       "younow_get_ingest: curl_easy_perform() returned code: %ld",
       VAR_19);
  FUNC_1(VAR_15);
  FUNC_11(VAR_17.memory);
  return VAR_13;
 }

 FUNC_1(VAR_15);

 if (VAR_17.size == 0) {
  FUNC_0(VAR_10,
       "younow_get_ingest: curl_easy_perform() returned empty response");
  FUNC_11(VAR_17.memory);
  return VAR_13;
 }

 if (VAR_11) {
  FUNC_11(VAR_11);
  VAR_11 = ((void*)0);
 }

 VAR_11 = FUNC_14(VAR_17.memory);
 FUNC_11(VAR_17.memory);
 FUNC_0(VAR_9, "younow_get_ingest: returning ingest: %s",
      VAR_11);
 return VAR_11;
}
