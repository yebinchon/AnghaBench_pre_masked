
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csv_data {char sep; scalar_t__ n; int prev; int * types; int headers; } ;
typedef int strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 struct csv_data* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int,int *,char*) ;
 int VAR_4 ;
 int * FUNC_2 (int ,int ,int ,void*) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4(strm_stream* VAR_7, int VAR_8, strm_value* VAR_9, strm_value* VAR_10, char VAR_11)
{
  strm_stream *VAR_12;
  struct csv_data *VAR_13;

  FUNC_1(VAR_7, VAR_8, VAR_9, "");
  VAR_13 = FUNC_0(sizeof(struct csv_data));
  if (!VAR_13) return VAR_0;
  VAR_13->headers = VAR_2;
  VAR_13->types = ((void*)0);
  VAR_13->prev = VAR_4;
  VAR_13->sep = VAR_11;
  VAR_13->n = 0;

  VAR_12 = FUNC_2(VAR_3, VAR_5, VAR_6, (void*)VAR_13);
  *VAR_10 = FUNC_3(VAR_12);
  return VAR_1;
}
