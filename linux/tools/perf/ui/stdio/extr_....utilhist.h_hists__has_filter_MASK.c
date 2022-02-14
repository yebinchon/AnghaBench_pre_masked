
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hists {int socket_filter; scalar_t__ symbol_filter_str; scalar_t__ dso_filter; scalar_t__ thread_filter; } ;



__attribute__((used)) static inline bool FUNC_0(struct hists *VAR_0)
{
 return VAR_0->thread_filter || VAR_0->dso_filter ||
  VAR_0->symbol_filter_str || (VAR_0->socket_filter > -1);
}
