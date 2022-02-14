
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_addr {scalar_t__ client; scalar_t__ port; } ;



__attribute__((used)) static inline int FUNC_0(struct snd_seq_addr *VAR_0, struct snd_seq_addr *VAR_1)
{
 return (VAR_0->client == VAR_1->client) && (VAR_0->port == VAR_1->port);
}
