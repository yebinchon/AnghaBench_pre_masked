
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_data_st {size_t (* callback ) (char const*,size_t,int ,int ,int ) ;int data; int category; } ;
typedef int BIO ;


 struct trace_data_st* FUNC_0 (int *) ;
 int VAR_0 ;
 size_t FUNC_1 (char const*,size_t,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(BIO *VAR_1,
                       const char *VAR_2, size_t VAR_3, size_t *VAR_4)
{
    struct trace_data_st *VAR_5 = FUNC_0(VAR_1);
    size_t VAR_6 = VAR_5->callback(VAR_2, VAR_3, VAR_5->category, VAR_0,
                               VAR_5->data);

    *VAR_4 = VAR_6;
    return VAR_6 != 0;
}
