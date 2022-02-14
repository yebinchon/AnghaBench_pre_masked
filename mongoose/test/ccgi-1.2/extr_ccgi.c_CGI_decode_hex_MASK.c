void *
FUNC_0(const char *VAR_0, int *VAR_1) {
    unsigned char *VAR_2;
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

    if (VAR_0 == 0 || ((VAR_5 = strlen(VAR_0)) & 1)) {
        return 0;
    }
    VAR_2 = FUNC_0(VAR_5 / 2 + 1);
    for (VAR_3 = VAR_4 = 0; VAR_3 < VAR_5; VAR_3 += 2) {
        if ((VAR_6 = FUNC_0(VAR_0[VAR_3])) >= 0 && (VAR_7 = FUNC_0(VAR_0[VAR_3 + 1])) >= 0) {
            VAR_2[VAR_4++] = (VAR_6 << 4) + VAR_7;
        }
        else {
            FUNC_0(VAR_2);
            return 0;
        }
    }
    VAR_2[VAR_4] = 0;
    if (VAR_1 != 0) {
        *VAR_1 = VAR_4;
    }
    return VAR_2;
}
