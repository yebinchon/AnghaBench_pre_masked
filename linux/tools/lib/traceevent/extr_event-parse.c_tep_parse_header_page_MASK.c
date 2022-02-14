
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int header_page_ts_size; int header_page_size_size; int header_page_data_offset; int old_format; int header_page_ts_offset; int header_page_size_offset; int header_page_overwrite; int header_page_data_size; } ;


 int FUNC_0 (char*,unsigned long) ;
 int FUNC_1 (char*,int*,int*,int) ;

int FUNC_2(struct tep_handle *VAR_0, char *VAR_1, unsigned long VAR_2,
     int VAR_3)
{
 int VAR_4;

 if (!VAR_2) {




  VAR_0->header_page_ts_size = sizeof(long long);
  VAR_0->header_page_size_size = VAR_3;
  VAR_0->header_page_data_offset = sizeof(long long) + VAR_3;
  VAR_0->old_format = 1;
  return -1;
 }
 FUNC_0(VAR_1, VAR_2);

 FUNC_1("timestamp", &VAR_0->header_page_ts_offset,
      &VAR_0->header_page_ts_size, 1);
 FUNC_1("commit", &VAR_0->header_page_size_offset,
      &VAR_0->header_page_size_size, 1);
 FUNC_1("overwrite", &VAR_0->header_page_overwrite,
      &VAR_4, 0);
 FUNC_1("data", &VAR_0->header_page_data_offset,
      &VAR_0->header_page_data_size, 1);

 return 0;
}
