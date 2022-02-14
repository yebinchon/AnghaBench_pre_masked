
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redir_cache_data {int redir_to; } ;
struct file_cache_entry {struct redir_cache_data redir_cache_data; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct file_cache_entry *VAR_0)
{
    struct redir_cache_data *VAR_1 = &VAR_0->redir_cache_data;

    FUNC_0(VAR_1->redir_to);
}
