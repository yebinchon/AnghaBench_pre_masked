
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_session {size_t bytes_transferred; size_t bytes_compressed; int zstd_data; } ;
struct perf_record_compressed {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int *,void*,size_t,void*,size_t,size_t,int ) ;

__attribute__((used)) static size_t FUNC_1(struct perf_session *VAR_2, void *VAR_3, size_t VAR_4,
       void *VAR_5, size_t VAR_6)
{
 size_t VAR_7;
 size_t VAR_8 = VAR_0 - sizeof(struct perf_record_compressed) - 1;

 VAR_7 = FUNC_0(&VAR_2->zstd_data, VAR_3, VAR_4, VAR_5, VAR_6,
           VAR_8, VAR_1);

 VAR_2->bytes_transferred += VAR_6;
 VAR_2->bytes_compressed += VAR_7;

 return VAR_7;
}
