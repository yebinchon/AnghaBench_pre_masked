
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct tfrc_tx_hist_entry {scalar_t__ seqno; struct tfrc_tx_hist_entry* next; } ;



__attribute__((used)) static inline struct tfrc_tx_hist_entry *
 FUNC_0(struct tfrc_tx_hist_entry *VAR_0, u64 VAR_1)
{
 while (VAR_0 != ((void*)0) && VAR_0->seqno != VAR_1)
  VAR_0 = VAR_0->next;
 return VAR_0;
}
