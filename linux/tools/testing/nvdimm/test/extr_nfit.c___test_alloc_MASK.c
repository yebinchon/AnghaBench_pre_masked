
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* name; void* end; void* start; } ;
struct nfit_test_resource {void* buf; int list; int requests; int lock; TYPE_2__ res; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;
struct nfit_test {int resources; TYPE_1__ pdev; } ;
typedef void* dma_addr_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,int ,struct nfit_test_resource*) ;
 int FUNC_2 (int ,void*,size_t) ;
 int FUNC_3 (struct nfit_test_resource*) ;
 struct nfit_test_resource* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (void*,int ,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (void*) ;

__attribute__((used)) static void *FUNC_11(struct nfit_test *VAR_5, size_t VAR_6, dma_addr_t *VAR_7,
  void *VAR_8)
{
 struct device *VAR_9 = &VAR_5->pdev.dev;
 struct nfit_test_resource *VAR_10 = FUNC_4(sizeof(*VAR_10),
   VAR_1);
 int VAR_11;

 if (!VAR_8 || !VAR_10 || !*VAR_7)
  goto err;
 VAR_11 = FUNC_1(VAR_9, VAR_4, VAR_10);
 if (VAR_11)
  goto err;
 FUNC_0(&VAR_10->list);
 FUNC_6(VAR_8, 0, VAR_6);
 VAR_10->dev = VAR_9;
 VAR_10->buf = VAR_8;
 VAR_10->res.start = *VAR_7;
 VAR_10->res.end = *VAR_7 + VAR_6 - 1;
 VAR_10->res.name = "NFIT";
 FUNC_8(&VAR_10->lock);
 FUNC_0(&VAR_10->requests);
 FUNC_7(&VAR_3);
 FUNC_5(&VAR_10->list, &VAR_5->resources);
 FUNC_9(&VAR_3);

 return VAR_10->buf;
 err:
 if (*VAR_7 && VAR_6 >= VAR_0)
  FUNC_2(VAR_2, *VAR_7, VAR_6);
 if (VAR_8)
  FUNC_10(VAR_8);
 FUNC_3(VAR_10);
 return ((void*)0);
}
